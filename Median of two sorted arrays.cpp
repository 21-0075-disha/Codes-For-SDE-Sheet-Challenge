double median(vector<int> nums1, vector<int> nums2)

{

    // Write your code here.

      if(nums2.size()<nums1.size()) return median(nums2,nums1);

        int n1,n2;

        n1=nums1.size(),n2=nums2.size();

        int b=0,e=n1;

        while(b<=e){

            int i1=(b+e)>>1;

            int i2=(n1+n2+1)/2-i1;

            int mx1=i1==0?INT_MIN:nums1[i1-1];

            int mx2=i2==0?INT_MIN:nums2[i2-1];

            int mn1=i1==n1?INT_MAX:nums1[i1];

            int mn2=i2==n2?INT_MAX:nums2[i2];

            if(mx1<=mn2 and mx2<=mn1)

            {

                if((n1+n2)%2==0)return (max(mx1,mx2)+min(mn1,mn2))/2.0;

                else return max(mx1,mx2);

            }

            else if(mx1>mn2)e=i1-1;

            else b=i1+1;

        }

        return 0.0;

}
