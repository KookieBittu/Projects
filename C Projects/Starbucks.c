#include<stdio.h>
int main()
{
    printf("\t\t\t    STARBUCKS\n");
    printf("\n");
    printf("FRAPPUCCINO Blended Beverages\n");
    for(int i=0;i<70;i++)
    {
    printf("_");
    }
    printf("\n");
    printf("\t\t\t\t\t   Tall    Grande    Venti\n");
    printf("\n");
    printf("1. Coffee  \t\t\t\t    220      245      280\n");
     printf("2. Mocha/White mocha  \t     \t\t    260      285      315\n");
      printf("3. Java Chip  \t\t\t\t    255      285      315\n");
       printf("4. Caramel/Esperesso  \t\t\t    260      290      320\n");
        printf("5. Caremel Java Chip  \t\t\t    220      245      280\n");
        for(int i=0;i<70;i++)
    {
    printf("_");
    }
    printf("\n");
    printf("6. Strawberries & Creme  \t\t    245      275      305\n");
          printf("7. Duble Chocolate Chip  \t\t    285      310      340\n");
          for(int i=0;i<70;i++)
    {
    printf("_");
    }
    printf("\n");
    printf("8. Cold Coffee  \t\t\t    255      280      300\n");
          for(int i=0;i<70;i++)
    {
    printf("_");
    }
    printf("\n");
    printf("9. Very Berry/Banana Berry/Banana  \t    345      375      405\n");
          for(int i=0;i<70;i++)
    {
    printf("_");
    }
    printf("\n");
    printf("10. Iced Americano  \t\t\t    205      230      255\n");
             printf("11. Iced Latte  \t\t\t    220      245      270\n");
             for(int i=0;i<70;i++)
    {
    printf("_");
    }
    printf("\n");
    printf("\n");
             printf("\n");
             printf("\n");
             

    int coffee;
    printf("ENTER YOUR COFFEE NUMBER : ");
    scanf("%d",&coffee);

    printf("\n");

    int size;
    printf("1. TALL | 2. GRANDE | 3. VENTI : ");
    scanf("%d",&size);
printf("\n");
    int price;

    switch(coffee)
    {

        case 1 :

        if(size==1){
            price=220;}
            else if(size==2){
                price=245;}
                else if(size==3){
                    price=280;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }

        break;

        case 2 :
      
        if(size==1){
            price=260;}
            else if(size==2){
                price=285;}
                else if(size==3){
                    price=315;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 3 :
     
        if(size==1){
            price=255;}
            else if(size==2){
                price=285;}
                else if(size==3){
                    price=315;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 4 :
       
        if(size==1){
            price=260;}
            else if(size==2){
                price=290;}
                else if(size==3){
                    price=320;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 5 :
    
        if(size==1){
            price=220;}
            else if(size==2){
                price=245;}
                else if(size==3){
                    price=280;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 6 :
    
        if(size==1){
            price=245;}
            else if(size==2){
                price=275;}
                else if(size==3){
                    price=305;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
     
        case 7 :

        if(size==1){
            price=285;}
            else if(size==2){
                price=310;}
                else if(size==3){
                    price=340;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }

        break;

        case 8 :
      
        if(size==1){
            price=255;}
            else if(size==2){
                price=280;}
                else if(size==3){
                    price=300;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 9 :
     
        if(size==1){
            price=345;}
            else if(size==2){
                price=375;}
                else if(size==3){
                    price=405;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 10 :
       
        if(size==1){
            price=205;}
            else if(size==2){
                price=230;}
                else if(size==3){
                    price=255;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 11 :
    
        if(size==1){
            price=220;}
            else if(size==2){
                price=245;}
                else if(size==3){
                    price=270;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;

     default :

    printf("INVALID CHOICE.....\n");

    break;

    }

    int quantity;
    int qut;
    printf("ENTER YOUR QUANTITY : ");
    scanf("%d",&quantity);

    printf("\n");
    
    for(int i=1;i<=quantity;i++)
    {
        qut=price*i;
    }


    int another,coff,o,rate,q;

    printf("DO YOU WANT ANOTHER COFFEE \n");
    printf("\n");
    printf("ENTER 12. YES | 13. NO ");
    scanf("%d",&another);
    printf("\n");
    switch (another)
    {
    case 12 :
    printf("ENTER YOUR COFFEE NUMBER : ");
    scanf("%d",&coff);

    printf("\n");
    int size;
    printf("1. TALL | 2. GRANDE | 3. VENTI : ");
    scanf("%d",&size);
    printf("\n");

    int rate;

    switch(coffee)
    {

        case 1 :

        if(size==1){
            rate=220;}
            else if(size==2){
                rate=245;}
                else if(size==3){
                    rate=280;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }

        break;

        case 2 :
      
        if(size==1){
            rate=260;}
            else if(size==2){
                rate=285;}
                else if(size==3){
                    rate=315;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 3 :
     
        if(size==1){
            rate=255;}
            else if(size==2){
                rate=285;}
                else if(size==3){
                    rate=315;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 4 :
       
        if(size==1){
            rate=260;}
            else if(size==2){
                rate=290;}
                else if(size==3){
                    rate=320;}
                    else{
                        printf("INVALID CHOICE....\n");
                    }
                    
        break;
        
        case 5 :
    
        if(size==1){
            rate=220;}
            else if(size==2){
                rate=245;}
                else if(size==3){
                    rate=280;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 6 :
    
        if(size==1){
            rate=245;}
            else if(size==2){
                rate=275;}
                else if(size==3){
                    rate=305;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
     
        case 7 :

        if(size==1){
            rate=285;}
            else if(size==2){
                rate=310;}
                else if(size==3){
                    rate=340;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }

        break;

        case 8 :
      
        if(size==1){
            rate=255;}
            else if(size==2){
                rate=280;}
                else if(size==3){
                    rate=300;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 9 :
     
        if(size==1){
            rate=345;}
            else if(size==2){
                rate=375;}
                else if(size==3){
                    rate=405;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 10 :
       
        if(size==1){
            rate=205;}
            else if(size==2){
                rate=230;}
                else if(size==3){
                    rate=255;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;
        
        case 11 :
    
        if(size==1){
            rate=220;}
            else if(size==2){
                rate=245;}
                else if(size==3){
                    rate=270;}
                    else{
                        printf("INVALID CHOICE.....\n");
                    }
                    
        break;

     default :

    printf("INVALID CHOICE.....\n");

    break;

    }


printf("ENTER YOUR QUANTITY : ");
    scanf("%d",&q);
    printf("\n");
    for(int i=1;i<=q;i++)
    {
        o = rate*i;
    }

    break;

    case 13 :

        printf("OK\n");
        q=0;
        o=0;
        coff=0;

    break;

    default :

    printf("INVALID CHOICE.....");

    break;

    }

    int total=0;
    total=qut+o;
    
    printf("\n");
    char first[20];
    char last[20];
    printf("ENTER YOUR FIRST NAME: ");
    scanf("%s",&first);
    printf("\n");
    printf("ENTER YOUR LAST NAME: ");
    scanf("%s",&last);
    printf("\n");
    int mobile;
    printf("ENTER YOUR MOBILE NUMBER: ");
    scanf("%d",&mobile);
    printf("\n\n");
    printf("\t\t\t\t B I L L\n\n");
    printf("NAME: %s %s\n\n",first,last);
    printf("MOBILE: %d",mobile);
    printf("\n");
    for(int i=1;i<=70;i++){
        printf("_");
    }
    printf("\n");
    printf("\t    ITEM NO.            QUENTITY            PRICE\n");
    for(int i=1;i<=70;i++){
        printf("_");
    } 
    printf("\n");
    printf("\t       %d                    %d                %d\n",coffee,quantity,qut);
    for(int i=1;i<=70;i++){
        printf("_");
    }
    printf("\n");
    printf("\t       %d                    %d                %d\n",coff,q,o);
    for(int i=1;i<=70;i++){
        printf("_");
    }
    printf("\n");
    printf("\t\t\t\t\t     TOTAL:- %d     \n",total);
    for(int i=1;i<=70;i++){
        printf("_");
    }

    printf("\n\n\t\t\t\tTHANK YOU\n\n");
}