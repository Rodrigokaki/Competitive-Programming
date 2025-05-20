nums1 = [1,2]
nums2 = [3,4]

m = len(nums1)
n = len(nums2)

nums1.extend(nums2)
nums1.sort()

if (m+n) % 2 == 1:
    print(nums1[(m+n)//2])
else:
    print((nums1[((m+n)//2) - 1] + nums1[((m+n)//2)])/2)