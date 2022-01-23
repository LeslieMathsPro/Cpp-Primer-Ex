#include "head.h"

class Window_mgr {
public:
    //窗口中每个屏幕的编号
    using ScreenIndex = std::vector<Screen>::size_type;
    //按照编号将指定的Screen重置为空白
    void clear(ScreenIndex);
private:
    //这个Window_mgr追踪的Screen
    //默认情况下，一个Window_mgr包含一个标准尺寸的空白Screen
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

class Screen {
    //friend class Window_mgr;
    //也可以只令成员函数作为友元
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef std::string::size_type pos;
    //也可以等价地使用类型别名来声明一个类型名字
    //using pos = std::string::size_type;
    Screen() = default; //因为Screen有另一个构造函数，
                        //所以本函数是必需的
    // cursor被其类内初始值初始化为0
    Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') { }
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) { }
    char get() const                    //读取光标处的字符
        { return contents[cursor]; }    //隐式内联
    inline char get(pos ht, pos wd) const; //显式内联
    Screen &move(pos r, pos c);            //能在之后被设为内联
    Screen &set(char);
    Screen &set(pos, pos, char);

    Screen &display()
    {
        cout << contents;
        return *this;
    }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};


inline 
Screen &Screen::move(pos r, pos c)
{
    pos row = r * width;    //计算行的位置
    cursor = row + c;       //在行内将光标移动到指定的列
    return *this;           //以左值的形式返回对象
}
char Screen::get(pos r, pos c) const //在类的内部声明成inline
{
    pos row = r * width;
    return contents[row + c];
}

inline Screen &Screen::set(char ch)
    {
        contents[cursor] = ch;
        return *this;
    }

inline Screen &Screen::set(pos r, pos c, char ch)
    {
        contents[r * width + c] = ch;
        return *this;
    }

void Window_mgr::clear(ScreenIndex i)
{
    //s是一个Screen的引用，指向我们想清空的那个屏幕
    Screen &s = screens[i];
    //将那个选定的Screen重置为空白
    s.contents = string(s.height * s.width, ' ');
}

int main(){
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display();
    cout <<"\n";
    myScreen.display();
    cout <<"\n";
}
//如果move、set和display 函数的返回类型不是Screen&而是Screen,则在上一个练习中将会发生什么情况?

// 函数的返回值如果是引用，则表明函数返回的是对象本身；函数的返回值如果不是引用，则表明函数返回的是对象的副本。

// 【解答】

// 返回引用的函数是左值的，意味着这些函数返回的是对象本身而非对象的副本。如果我们把一系列这样的操作连接在一起的话，所有这些操作将在同一个对象上执行。

// 在上一个练习中，move、set和display函数的返回类型都是Screen&，表示我们首先移动光标至（4，0）位置，然后将该位置的字符修改为'#'，最后输出myScreen的内容。

// 相反，如果我们把move、set和display函数的返回类型改成Screen，则上述函数各自只返回一个临时副本，不会改变myScreen的值。