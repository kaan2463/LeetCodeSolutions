class Solution
{
    public double findMedianSortedArrays(int[] nums1, int[] nums2)
    {

        int[] arr1 = nums1.length > nums2.length ? nums2 : nums1;
        int[] arr2 = nums1.length > nums2.length ? nums1 : nums2;

        if ((arr1 == null || arr1.length == 0) && (arr2 == null || arr2.length == 0))
        {
            return 0;
        }

        if (arr1 == null || arr1.length == 0)
        {
            int index = arr2.length / 2;
            if (arr2.length % 2 == 0)
            {
                return (arr2[index] + arr2[index - 1]) / 2.0;
            }
            else
            {
                return arr2[index];
            }
        }

        if (arr2 == null || arr2.length == 0)
        {
            int index = arr1.length / 2;
            if (arr1.length % 2 == 0)
            {
                return (arr1[index] + arr1[index - 1]) / 2.0;
            }
            else
            {
                return arr1[index];
            }
        }

        int mid = (arr1.length + arr2.length) / 2;

        int begin = 0;
        int end = arr1.length;
        int index = 0;

        double x, y, x1, y1;


        while (true)
        {

            index = begin + (end - begin) / 2;

            x = index - 1 < 0 ? -Double.MAX_VALUE : arr1[index - 1];
            y = index > arr1.length - 1 ? Double.MAX_VALUE : arr1[index];

            x1 = mid - index - 1 < 0 ? -Double.MAX_VALUE : arr2[mid - index - 1];
            y1 = mid - index > arr2.length - 1 ? Double.MAX_VALUE : arr2[mid - index];


            if ((x <= y1) && (x1 <= y))
            {

                double med;
                if ((arr1.length + arr2.length) % 2 == 0)
                {
                    med = Math.max(x, x1) + Math.min(y1, y);
                    med /= 2.0;
                }
                else
                {
                    med = Math.min(y1, y);
                }
                return med;
            }

            if (y < y1)
            {
                begin = index + 1;
            }
            else
            {
                end = index;
            }

        }

    }



}