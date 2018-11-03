//M9_07_pg81_2a_Amir


#include<stdio.h>

main()
{
	int pre;
	char choi;
	printf("Input blood pressure : ");
	scanf("%d", &pre);
	if(pre>=140 && pre<=250)
	{
		printf("\nAre you taking blood pressure medications? Y/N\n");

		scanf("%c", &choi);
//		choi = getc(stdin);
		if(choi == 'Y' || choi == 'y')
		printf("Status high blood pressure. Consult the doctor for need to change the medication dosage");
		else
		printf("Status high blood pressure. Consult the doctor and take blood pressure medications");
	} 
	else if(pre>=120 && pre<=139)
		printf("Pre-blood pressure");
	else if(pre>=90 && pre<=119)
		printf("Ideal blood pressure");
	else
		printf("Invalid range");
}
