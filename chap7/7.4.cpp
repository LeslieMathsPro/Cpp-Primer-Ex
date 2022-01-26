Screen::pos ht = 24, wd = 80; //使用Screen定义的pos类型
Screen scr(ht, wd, ' ');
Screen *p = &scr;
char c = scr.get();           //访问scr对象的get成员
c = p->get();                 //访问p所指对象的get成员   