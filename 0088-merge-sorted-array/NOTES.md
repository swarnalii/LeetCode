int i = m-1;  // to traverse nums1 of length m
int j = n-1;  // to traverse nums 2
int k = m+n-1;  // for the final result
while(i>=0 && j>=0)
{
if(nums1[i]>nums2[j])
nums1[k--]=nums1[i--];
else nums1[k--]=nums2[j--];
}
while(j>=0)
nums1[k--]=nums2[j--];
}**