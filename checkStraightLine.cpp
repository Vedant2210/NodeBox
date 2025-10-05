class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // int i=1,j=1;
        // int slope;
        // while(i<cordinates.size()){
        //     slope=coordinates[i][j]/coordinates[i-1][j];
        // }
        double l=coordinates.size();
        double prev=INT_MAX;
      //  sort(coordinates.begin(),coordinates.end());
        for(double i=0;i<l-1;i++){
            double x1=coordinates[i][0];
            double x2=coordinates[i+1][0];
            double y1=coordinates[i][1];
            double y2=coordinates[i+1][1];
            double diff=(x2-x1);
            double diff2=(y2-y1);
            if(diff==0){
                cout<<"hi";
            double cnt=0;
            for(double j=0;j<l;j++){
                if(coordinates[j][0]==x1){
                    cnt++;
                }
            }
           cout<<cnt<<endl;
            if(cnt==l){
            return true;
            }
            else{
                return false;
            }
            }
            if(diff2==0){

           
            double cnt=0;
            for(double j=0;j<l;j++){
                if(coordinates[j][1]==y1){
                    cnt++;
                }
            }
            if(cnt==l){
            return true;
            }
             else{
                return false;
            }
            }
           
            double temp=diff2/diff;
            cout<<temp<<endl;
            if(prev==INT_MAX){
                prev=temp;
                continue;
            }
            if(temp!=prev){
                return false;
            }

        }
        return  true;
    }
};
