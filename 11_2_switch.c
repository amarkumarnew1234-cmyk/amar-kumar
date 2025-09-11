#include<stdio.h>
int main(){
    int a;
    printf("Enter a");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("You entered 1");
        break;
        case 2:
        printf("You entered 2");
        break;
        case 3:
        printf("You entered 3");
        break;
        case 4:
        printf("You entered 4");
        break;
        default:
        printf("Nothing matched");
    }
    return 0;
    /*
    agar 1 click karte ho to you entered1 you enterd2 ....to 4 tak aa jaayega agar 2 click karte ho to 1 wala 
    chor ke sab aa jaayega matlab case me jo bhi click karo uske saath uske neeche wala bhi aata hai saath me
    nothing matched bhi agar 4 se jyada likhe to nothing matched aa jaayega. 
    Isse bachne ke liye hum break ka use karte hai taki koi particular hi print ho sake
    default me break nhi daalte
    break yaani us switch case se bahar nikal do
    */
}
