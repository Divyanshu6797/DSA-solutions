class Solution {
  public:
  static bool comp(Item a, Item b) {
      double r1 = (double)a.value/(double)a.weight;
      double r2 = (double)b.value/(double)b.weight;
      
      return r1>=r2;
  }  

// sorting
// sort(arr , arr+ n ,[](const auto &a , const auto &b){
//             double x = static_cast<double>(a.value) / a.weight;
//             double y = static_cast<double>(b.value) / b.weight;
//             return  x > y;
//         });

  
  double fractionalKnapsack(int w, Item arr[], int n) {
        
        sort(arr,arr+n,comp);
        
        double profit = 0;
        
        for(int i=0;i<n;i++) {
            if(w >= arr[i].weight) {
                profit += arr[i].value;
                w -= arr[i].weight;
            }
            else {
                double ratio = (double)arr[i].value/(double)arr[i].weight;
                double result = ratio * w;
                profit += result;
                return profit;
            }
        }
    
    }
};
