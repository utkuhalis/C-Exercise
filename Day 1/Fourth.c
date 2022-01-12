main()
{
	for(int i=0; i<=10; i++){
		printf("i=%d \n", i);
	}
	
	
	printf("\n");
	
	int n = 0;
	while(n <= 10){
		printf("n=%d \n", n);
		n++;
	}
	
	printf("\n");
	
	int n2 = 0;
	
	do {
		printf("n=%d \n", n2);
		++n2;
	}
	while (n2 <= 10);

    return 0;
}
