//https://www.hackerrank.com/challenges/sock-merchant
int arr[101];

int sockMerchant(int n, vector<int> ar) {
    int sum=0;
    for(int i=0;i<ar.size();i++)
        arr[ar[i]]+=1;
    
    for(int i=0;i<101;i++)
    {
        sum+=arr[i]/2;
    }
    return sum;
}