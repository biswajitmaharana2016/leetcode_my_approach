int findTheDistanceValue(int* arr1, int arr1Size, int* arr2, int arr2Size, int d)
{
    int sum=0;
    for(int i=0;i<arr1Size;i++)
    {
        for(int j=0;j<arr2Size;j++)
        {
            if((arr1[i]-arr2[j])<0)
            {
                if((-1*(arr1[i]-arr2[j]))<=d)
                {
                    sum+=1;
                    break;
                }
            }
            else
            {
                if((arr1[i]-arr2[j])<=d)
                {
                    sum+=1;
                    break;
                }
            }
        }
    }
    return (arr1Size-sum);
}
