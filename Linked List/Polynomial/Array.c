//6x^4 + 5x^3 + 4x^2 + 3x^1 + 2x^0
//5x^3 + 4x^2 + 3x^1 + 2x^0
#include<stdio.h>
//Creation of Polynomial 1
int poly1(int a[], int x){
    printf("Enter Element of Polynomial 1\n");
    for (int i = x; i >= 0; i--){
        printf("Enter Coeficient of x^%d:- ", i);
        scanf("%d",&a[i]);
    }    
}
//Creation of Polynomial 2
int poly2(int b[], int y){
    printf("Enter Element of Polynomial 2\n");
    for (int i = y; i >= 0; i--){
        printf("Enter Coeficient of x^%d:- ", i);
        scanf("%d",&b[i]);
    }    
}
//Traversal
int traversal(int arr[], int n){
    printf("After Addition:- \n");
    for (int i = 0; i <= n; i++){
        printf("Coeffient of x^%d:-%d\n",i,arr[i]);
    }
    printf("\n");
}

int addition(int a[], int b[], int x, int y){
    if (x<y){
        int c[y];                           //Agar y bada hai toh addtion wla array y size ka hoga.
        for (int i=0; i<=x; i++){
            c[i] = a[i]+b[i];               //Yha pe humlog x tak ko add kar lenge kyuki x tak size same hai na, fir jo extra element hai ushko direct insert kar denge new array mein.
        }

        for (int i = x+1; i <= y; i++)
        {
            c[i] = b[y];                    //Yha pe extra element ko direct add kar diye. x se leke y tak diagram banana samjh jaoge.
        }
        traversal(c,y);                     //new array
    }
    else if (x>y)
    {
        int c[x];                           //Agar x bada hai toh addtion wla array x size ka hoga.
        for (int i=0; i<=y; i++){
            c[i] = a[i]+b[i];               //Yha pe humlog y tak ko add kar lenge kyuki y tak size same hai na, fir jo extra element hai ushko direct insert kar denge new array mein.
        }
        for (int i = y+1; i <= x; i++)
        {
            c[i] = a[x];                    //Yha pe extra element ko direct add kar diye. y se leke x tak diagram banana samjh jaoge.
        }
        traversal(c,x);                     //new array

    }
    else{
        int c[x];                           //Agar dono same size ka hoga toh dono mein koi ek ka size le lenge, ishme humlog x ka le liye.
        for (int  i = 0; i <= x; i++){
            c[i] = a[i]+b[i];               //Yha pe humlog dono ko add karke rahe hai. kyuki dono ka size equal hai, toh normal add.
        }
        traversal(c,x);                     //new array
    }
}
int main(){
    int x,y;
    printf("Enter Degree of Polynomial 1:- ");
    scanf("%d",&x);
    printf("Enter Degree of Polynomial 2:- ");
    scanf("%d",&y);

    int a[x], b[y];
    poly1(a, x);
    poly2(b,y);

    addition(a,b,x,y);
}