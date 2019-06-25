void dsp(int *, int num);
void dsl();

void dsp(int *p, int num){
	dsl();
	for(int i=0; i<num; i++ )
		printf("%d ", *(p+i));
}

void dsl(){
	printf("- - - - - - - - - - - - - - - - - - - - -\n");
}
