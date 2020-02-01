void main()
{
    int x,m,n,i,j,flag,k,size,arr[100];
    scanf("%d",&x);
    for(i=0;i<2*x;i+=2)
    {
        scanf("%d",&arr[i]);
        scanf("%d\n",&arr[i+1]);
    }
    size = sizeof(arr)/sizeof(int);
    for (i=0;i<size;i+=2)
    {
        while (arr[i] < arr[i+1]) {
        flag = 0;
        for (k = 2; k <= arr[i] / 2; ++i) {
            if (arr[i] % k == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", arr[i]);
        ++arr[i];
    }

}
}
          /*   for (j=arr[i];j<arr[i+1];j++)
         {

            for (k = 2; k <= j; ++k)
            {
                if (k % j == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (k == 1)
            {
                break;
            }
            else
            {
                if (flag == 0)
                printf("%d",j);
                else
                break;
            }
         }
    }*/
