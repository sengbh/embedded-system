#define SOFT_RESET;

void reset(void){
	void(*(ptr)();
	fptr = (void(*)())0;
	fptr();
}
int main(int argc, char** argv){
	#ifdef SOFT_RESET
		reset();
	#endif
		return 0;
}
