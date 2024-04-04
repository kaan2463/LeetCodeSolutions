namespace _1845_Seat_Reservation_Manager
{
#include<solution.h>

    // 1845_Seat_Reservation_Manager
    class SeatManager
    {
    private:
        int n;
        int current;
        set<int> unreserved;
    public:
        SeatManager(int n)
        {
            this->n = n;
            this->current = 0;
        }

        int reserve()
        {
            if (unreserved.empty())
            {
                current++;
                return current;
            }

            auto first = unreserved.begin();

            int val = *first;
            unreserved.erase(first);

            return val;
        }

        void unreserve(int seatNumber)
        {
            unreserved.insert(seatNumber);
        }
    };

    /**
     * Your SeatManager object will be instantiated and called as such:
     * SeatManager* obj = new SeatManager(n);
     * int param_1 = obj->reserve();
     * obj->unreserve(seatNumber);
     */

}