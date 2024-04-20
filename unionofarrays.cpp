class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
    map<int, int> frequencyMap;
    for (int i = 0; i < n; ++i) {
        frequencyMap[arr1[i]]++;
    }
    for (int i = 0; i < m; ++i) {
        frequencyMap[arr2[i]]++;
    }
    vector<int> uniqueElements;
    for (const auto& pair : frequencyMap) {
        uniqueElements.push_back(pair.first);
    }

    return uniqueElements;
    }
};