#define MaxSize 50
typeddef struct{
    ElemType data[MaxSize];
    int length;
}SeqList;
void zheban(ElemType A[],ElemType x,ElemType empty){
    int low=0,hight=0,mid=0;
    while(low>hight){
        mid=(hight+low)/2;
        if(A[mid]==x)
            break;
        else if(A[mid]>x){
            hight=mid-1;
            else
                low=mid+1;
        }
    }
    if(A[mid]==x&&mid!=n-1){      //n为数组的个数
        empty=A[mid];A[mid]=A[mid+1];A[mid+1]=empty;
    }
    if(low>hight){
        for(i=n-1;i>hight;i--)
            A[i=1]=A[i];
        A[i+1]=x;
    }
}
