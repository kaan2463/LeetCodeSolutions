// 273_Integer_to_English_Words
class Solution
{
    static int bilions = 1000000000;
    static int millions = 1000000;
    static int thousands = 1000;
    static int hundred = 100;
    static String[] numbers = { "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight",
        "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
        "Eighteen", "Nineteen", "Twenty", };
    static String[] tenned =
    { "Nine", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };

    public String numberToWords(int num)
    {
        if (num == 0)
        {
            return "Zero";
        }

        String str = "";
        int division = num / bilions;
        int remainder = num % bilions;

        str += division == 0 ? "" : zeroToHundred(division) + " Billion";

        division = remainder / millions;
        remainder = remainder % millions;
        str += division == 0 ? "" : zeroToHundred(division) + " Million";

        division = remainder / thousands;
        remainder = remainder % thousands;
        str += division == 0 ? "" : zeroToHundred(division) + " Thousand";


        str += remainder == 0 ? "" : zeroToHundred(remainder);

        return str.substring(1, str.length());
    }

    // 0 <= num < 100
    static public String zeroToHundred(int num)
    {



        int division = num / hundred;
        int remainder = num % hundred;
        String str = "";

        str += division == 0 ? "" : " " + numbers[division] + " Hundred";

        if (remainder < 21)
        {
            str += remainder == 0 ? "" : " " + numbers[remainder];
            return str;
        }

        division = remainder / 10;
        remainder = remainder % 10;

        str += division == 0 ? "" : " " + tenned[division];


        if (remainder != 0)
        {
            str += " " + numbers[remainder];
        }
        return str;
    }

}