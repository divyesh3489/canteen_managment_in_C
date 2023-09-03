#include<stdio.h>
#include<time.h>
void main()
{  system("color C0");

        printf("||||||||||||||||||||||||| SHREEJ FAST FOOD |||||||||||||||||||||||||");
    printf("\n\n\t==================== BEVEARAGES ====================");
	printf("\n\n\t>>AERATED DRINKS __________________[ MRP ] [ QTY ]");
	printf("\n\n\t1. RGB_____________________________10/-  200(ML)");
	printf("\n\t2. CAN_____________________________15/-  300(ML)");
	printf("\n\t3. PET_____________________________15/-  600(ML)");
	printf("\n\t4. TEA_____________________________10/-  1 CUP");
	printf("\n\t5. COFFEE__________________________15/-  1 CUP");
	printf("\n\n\t>>JUICE/WATER");
	printf("\n\n\t6. TERA MM Range___________________10/-  200(ML)");
	printf("\n\t7. MMNF____________________________15/-  400(ML)");
	printf("\n\t8. MAAZA___________________________20/-  600(ML)");
    printf("\n\t9. KINLEY WATER____________________20/-  500(ML)");
    printf("\n\t10.MMPO____________________________15/-  400(ML)");
    printf("\n\n\t===================== SANDWICH =====================");
    printf("\n\n\t11. Veg. Sandwich___________________40/- ");
    printf("\n\t12. Cheese Sandwich_________________60/- ");
    printf("\n\t13. Veg. Cheese Sandwich____________80/- ");
    printf("\n\t14. Veg. Grill Sandwich_____________60/- ");
    printf("\n\t15. Cheese Grill Sandwich___________80/- ");
    printf("\n\t16. Veg. Cheese Grill Sandwich______100/- ");
    printf("\n\t17. Aloo Mutter Sandwich____________40/- ");
    printf("\n\t18. Grill Aloo Mutter Sandwich______50/- ");
    printf("\n\n\t==================== PARATHA ====================");
    printf("\n\n\t19. Aloo Paratha With Curd___________50/- ");
    printf("\n\t20. Cheese Aloo Paratha______________80/- ");
    printf("\n\n\t=================== LIGHT SNACKS ===================");
	printf("\n\t21. SAMOSA___________________________30/-   ");
	printf("\n\t22. KACHORI _________________________40/- ");
	printf("\n\t23. PUFF(REGULAR)____________________20/-  ");
	printf("\n\t24. CHEESE PUFF______________________55/- ");
	printf("\n\t25. CHINESE PUFF_____________________40/-  ");
	printf("\n\t26. MASKABAN_________________________30/-  ");
	printf("\n\t27. JAM MASKABAN_____________________40/-  ");
	printf("\n\t28. PAUHA____________________________25/-  ");
	printf("\n\t29. BOMBAY BHEL______________________40/-  ");
	printf("\n\t30. DABELI___________________________30/-  ");
	printf("\n\n||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
	
  

int v[31]={10,15,15,10,15,10,15,20,20,15,40,60,80,60,80,100,40,50,50,80,30,40,20,55,40,30,40,25,40,30};
int a[31],b[20],sum=0,n=2,i,num=0,x,c=1,z=2,s;

do{ // this loop is covered whole program. this loop is using for multicostumer.
  
printf("\n\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~ COSTUMER %d ~~~~~~~~~~~~~~~~~~~~~~~~~~~",c);

back:; // goto labele	      
		
while(1<n)  // if user enter x > 31 value than this loop is give a second chance.            
	   {
	       printf("\n\n  | Enter the number of types of item: ");
           scanf("%d",&num);
           if(num<31)
           break;
          
           else
           {
		   printf("\n\n ||||||||| ERROR ! RE-ENTER YOUR TYPES OF ITEMS !!! |||||||||");
           n++;} }
	
	for(i=0;i<num;i++) // continuously updating a value of [i] until condition is satisfied 
	{
	   
	    printf("\n  | Enter your choice %d: ",i+1); //Enter item number.
	    scanf("%d",&a[i]);
		printf("  | Enter no. of quantity  : "); // Enter quantity of item. 
		scanf("%d",&b[i]);
		
      
	  switch(a[i]) // print : you selected this.
	    {
	    	    case 1: printf("  ( YOU SELECTED  %d RGB )\n",b[i]); // b[i] for qty of item.
	    	break;
	    	    case 2: printf("   ( YOU SELECTED %d CAN )\n",b[i]);
	    	break;
	    		case 3: printf("   ( YOU SELECTED %d PET )\n",b[i]);
	    	break;
	    		case 4: printf("   ( YOU SELECTED %d TEA )\n",b[i]);
	    	break;
	    		case 5: printf("   ( YOU SELECTED %d COFFEE )\n",b[i]);
	    	break;
	    		case 6: printf("   ( YOU SELECTED %d TETRA MM RANG. )\n",b[i]);
	    	break;
	    	    case 7:printf("   ( YOU SELECTED %d MMNF. )\n",b[i]);
	    	break;
	    	    case 8:printf("   ( YOU SELECTED %d MAAZA )\n",b[i]);
	    	break;
	    	    case 9:printf("   ( YOU SELECTED %d KINLEY WATER )\n ",b[i]);
	    	break;
	    	    case 10:printf("   ( YOU SELECTED %d MMPO )\n",b[i]);
	    	break;
	    	 case 11:
            printf("    (YOU SELECTED %d Veg.Sandwich ) ", b[i]);
            break;
        case 12:
            printf("    (YOU SELECTED %d Cheese Sandwich ) ", b[i]);
            break;
        case 13:
            printf("    (YOU SELECTED %d Veg.Cheese Sandwich ) ", b[i]);
            break;
        case 14:
            printf("    (YOU SELECTED %d Veg.Grill Sandwich ) ", b[i]);
            break;
        case 15:
            printf("    (YOU SELECTED %d Cheese Grill Sandwich ) ", b[i]);
            break;
        case 16:
            printf("    (YOU SELECTED %d Veg. Cheese Grill Sandwich ) ", b[i]);
            break;
        case 17:
            printf("    (YOU SELECTED %d Aloo Mutter Sandwich ) ", b[i]);
            break;
        case 18:
            printf("    (YOU SELECTED %d Grill Aloo Mutter Sandwich ) ", b[i]);
            break;
        case 19: printf("    (YOU SELECTED %d Aloo Paratha With Curd ) ", b[i]);
            break;
        case 20: printf("    (YOU SELECTED %d Cheese Aloo Paratha ) ", b[i]);
            break;
             case 21: printf("  ( YOU SELECTED  %d  SAMOSA )\n",b[i]);
	    	break;
	    	    case 22: printf("   ( YOU SELECTED %d  KACHORI )\n",b[i]);
	    	break;
	    		case 23: printf("   ( YOU SELECTED %d  PUFF(REGULAR) )\n",b[i]);
	    	break;
	    		case 24: printf("   ( YOU SELECTED %d  CHEESE PUFF )\n",b[i]);
	    	break;
	    		case 25: printf("   ( YOU SELECTED %d  CHINESE PUFF )\n",b[i]);
	    	break;
	    		case 26: printf("   ( YOU SELECTED %d  MASKABAN )\n",b[i]);
	    	break;
	    	    case 27:printf("   ( YOU SELECTED %d  JAM MASKABAN )\n",b[i]);
	    	break;
	    	    case 28:printf("   ( YOU SELECTED  %d PAUHA )\n",b[i]);
	    	break;
	    	    case 29:printf("   ( YOU SELECTED %d  BOMBAY BHEL )\n ",b[i]);
	    	break;
	    	    case 30:printf("   ( YOU SELECTED %d  DABELI )\n",b[i]);
	    	break;
	    	
			}
	}
	
	  printf("\n\n\t ENTER THE [1] FOR BILL AND ENTER THE [0] FOR RE-CHOICING. !!! = "); 
	  scanf("%d",&x);
	  
   if(x==0)  // if user want to re-enter it's choice.
   goto back; // jump the 56 line.
	  
   else // for printing a bill.
  {
				 
	for(i=0;i<num;i++) //  calculting the total amount.
	 
	   {  sum+=v[a[i]-1]*b[i]; }  
	 
	          
	   printf("\n\n================================");
	   printf("\n       SHREEJ FAST FOOD          ");
	   printf("\n================================");
	for(i=0;i<num;i++)  // print : bill
	{                                              // b[i]= qty of item.
	  switch(a[i])                                // v[0] = price of item. 
	   {
		case 1: printf("\n   RGB                 %dx%d = %d",v[0],b[i],v[0]*b[i]);
		break;
		case 2:printf("\n   CAN                  %dx%d = %d",v[1],b[i],v[1]*b[i]);
		break;
		case 3: printf("\n   PET                  %dx%d = %d",v[2],b[i],v[2]*b[i]);
		break;
		case 4: printf("\n   TEA                 %dx%d = %d",v[3],b[i],v[3]*b[i]);
		break;
		case 5:printf("\n   COFFEE                %dx%d = %d",v[4],b[i],v[4]*b[i]);
		break;
		case 6:printf("\n   TETRA MM RANGE       %dx%d = %d",v[5],b[i],v[5]*b[i]);
		break;
		case 7: printf("\n   MMNF                 %dx%d = %d",v[6],b[i],v[6]*b[i]);
		break;
		case 8:printf("\n   MAAZA                 %dx%d = %d",v[7],b[i],v[7]*b[i]);
		break;
		case 9: printf("\n   KINLEY WATER         %dx%d = %d",v[8],b[i],v[8]*b[i]);
		break;
		case 10:printf("\n   MMPO                 %dx%d = %d",v[9],b[i],v[9]*b[i]);
		break; 
		case 11:
            printf("\n  Veg.Sandwich           %dx%d = %d", v[10], b[i], v[10] * b[i]);
            break;
        case 12:
            printf("\n Cheese Sandwich         %dx%d = %d", v[11], b[i], v[11] * b[i]);
            break;
        case 13:
            printf("\n Veg.Cheese Sandwich     %dx%d = %d", v[12], b[i], v[12] * b[i]);
            break;
        case 14:
            printf("\n Veg.Grill Sandwich      %dx%d = %d", v[13], b[i], v[13] * b[i]);
            break;
        case 15:
            printf("\n Cheese Grill Sandwich   %dx%d = %d", v[14], b[i], v[14] * b[i]);
            break;
        case 16:
            printf("\n Veg. Cheese Grill Sandwich %dx%d = %d", v[15], b[i],v[15] * b[i]);
            break;
        case 17:
            printf("\n Aloo Mutter Sandwich     %dx%d = %d", v[16], b[i], v[16] * b[i]);
            break;
        case 18:
            printf("\n Grill Aloo Mutter Sandwich %dx%d = %d", v[17], b[i], v[17] * b[i]);
            break;
        case 19:
            printf("\n Aloo Paratha With Curd    %dx%d = %d", v[18], b[i], v[18] * b[i]);
            break;
        case 20:
            printf("\n Cheese Aloo Paratha       %dx%d = %d",v[19], b[i], v[19] * b[i]);
            break;
			 case 21:
            printf("\n  SAMOSA                   %dx%d = %d", v[20], b[i], v[10] * b[i]);
            break;
        case 22:
            printf("\n KACHORI                   %dx%d = %d", v[21], b[i], v[21] * b[i]);
            break;
        case 23:
            printf("\n PUFF                      %dx%d = %d", v[22], b[i], v[22] * b[i]);
            break;
        case 24:
            printf("\n CHEESE PUFF               %dx%d = %d", v[23], b[i], v[23] * b[i]);
            break;
        case 25:
            printf("\n CHINESE PUFF              %dx%d = %d", v[24], b[i], v[24] * b[i]);
            break;
        case 26:
            printf("\n MASKABAN                  %dx%d = %d", v[25], b[i],v[25] * b[i]);
            break;
        case 27:
            printf("\n JAM MASKABAN              %dx%d = %d", v[26], b[i], v[26] * b[i]);
            break;
        case 28:
            printf("\n PAUHA                     %dx%d = %d", v[27], b[i], v[27] * b[i]);
            break;
        case 29:
            printf("\n BOMBAY BHEL               %dx%d = %d", v[28], b[i], v[28] * b[i]);
            break;
        case 30:
            printf("\n DABELI                    %dx%d = %d",v[29], b[i], v[29] * b[i]);
            break;
			
		 }
		
	  }
     printf("\n================================");
	 printf("\n   TOTAL PAYMENT AMOUNT:  Rs. %d",sum);
	 time_t now;time(&now);
	 printf("\n================================"); 
  }
   
   printf("\n\n\t | Enter the [1] for second costumer & Enter the [0] for close the system.: ");
   scanf("%d",&s);
   
   if(s==1)
   {z++;
   c++;}
   
   else if(s==0)
   {break;}
   
   }while(1<z); 
}



