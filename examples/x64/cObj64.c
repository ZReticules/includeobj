extern int ext1, ext2;
extern int func1();

extern int c_func(){
	return ext1 + ext2 + func1();
}
