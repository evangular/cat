int main(int argc, char *argv[])
{
	//argument COUNT = argc
	//argument VARIABLE [number]= argv0
	//							argv1
	if(argc>1){ // if there are any arguments OTHER than the name of// 
	//the program itself (argv[0] is ALWAYS available and argv is// 
	//NEVER less than 1)
		printf("number of arguments to program(%s): %d\n",argv[0],argc-1); 
		//argv[0] is the name of your program
		for(int i=0; i<argc; i++){ // for i starts at 0, and ends when
		//i is more than argc (arg c is the number of arguments(an 
		//array of strings named argv "[]") passed to your program from the 
		//command line)
			printf("argument %d: %s\n",i,argv[i]); // (argv[i] is the 
			//parameter i units from the beginning of the array of 
			//arguments)
		}
	return 0; // exit program/function, if called from 'main' it exits 
	//the program
	}

	if(argc==0){
		//THIS WILL NEVER HAPPEN HUMAN
	}
