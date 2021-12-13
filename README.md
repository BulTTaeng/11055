
# "11055"

made by Jaehyeok Choi

## Welcome to Jaehyeok's github!

## What is the problem?

![button](https://github.com/Choi-JaeHyeok-21500749/11055/blob/main/11055_pro.JPG)

## What Algorithm should I use?

dynamic programming

## What was the key point and the hard part?

Similar question that I solved , but in here I have to find the maximum sum of increasing sequence.

So in here I think I can not use binary search because binary search can put wrong number in the increasing sequence.

(ex, [1 , 100 ,5] will be saved as [5 , 100] if I use binary search.)

So in here I decided to see all the instance before current index and save the max sum of increasing sequence if I take current index value.

If some of the previous index's value is samller than the current index value, I will add them and save it in the dp[current index]

After all these sequence, I iterate the dp arry and find the max value.

(I think I can save the space complexity if I use num(input values arrya) as dp.)

## Where can I get more help, if I need it?

You can contact me through email, which is 21500749@handong.edu.
Thank you for visiting this github!

