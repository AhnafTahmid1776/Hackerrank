int luckBalance(int k, vector<vector<int>> contests) {
 int count=0;
 sort(contests.begin(),contests.end(),greater_than_key);
 
 for(int i=0; i<contests.size(); i++){
    if(contests[i][1]==1 && k > 0){
        k--;
        count+=contests[i][0];
    }
    else if(contests[i][1]==0){
        count+=contests[i][0];
    }
    else count-=contests[i][0];
 }
 return count;
}
