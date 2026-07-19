def divide(dividend, divisor):
    if divisor == 0:
        return "Division by zero "
      
    sign = -1 if (dividend < 0) ^ (divisor < 0) else 1
    dividend = abs(dividend)
    divisor = abs(divisor)

    left, right = 0, dividend
    ans = 0

    while left <= right:
        mid = (left + right)// 2

        if mid * divisor <= dividend:
            ans = mid
            left = mid + 1
        else:
            right = mid - 1

    return sign * ans
