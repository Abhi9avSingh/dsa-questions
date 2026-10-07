
class Solution(object):
    def divide(self, dividend, divisor):
        INT_MAX = 2**31 - 1
        INT_MIN = -(2**31)

        if dividend == INT_MIN and divisor == -1:
            return INT_MAX

        negative = (dividend < 0) != (divisor < 0)

        dd = abs(dividend)
        dv = abs(divisor)

        quotient = 0

        while dd >= dv:
            temp = dv
            multiple = 1

            while dd >= (temp << 1):
                temp <<= 1
                multiple <<= 1

            dd -= temp
            quotient += multiple

        if negative:
            quotient = -quotient

        return quotient
