
 //Day(13). Booble sort by recursion 
 bubbleSort(arr[], n)

{

  for (i = 0; i < n-1; i++)      

       

     for (j = 0; j < n-i-1; j++)

     {

         if(arr[j] > arr[j+1])

             swap(arr[j], arr[j+1]);

     }

}
