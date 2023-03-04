//int removeelement(int* nums, int numssize, int val)
//{
//	int src = 0, dst = 0;
//	while (src < numssize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst++] = nums[src++];
//		}
//		else
//		{
//			src++;
//		}
//	}
//	return dst;
//}
//int removedulicates(int* nums, int numssize)
//{
//	int src = 0,dst = 0;
//	for (int src = 0; src < numssize; src++)
//	{
//		if (nums[src] != nums[dst])
//		{
//			nums[++dst] = nums[src];
//		}
//	}
//	return dst + 1;
//}
void merge(int* nums1, int numsSize, int m, int* nums2, int nums2Size, int n)
{
	int end1 = m - 1, end2 = n - 1;
	int dst = m + n - 1;
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] > nums2[end2])
		{
			nums1[dst--] = nums1[end1--];
		}
		else
		{
			nums1[dst--] = nums2[end1--];
		}
	}
	while (end2 >= 0)
	{
		nums1[dst--] = nums2[end2--];
	}
}