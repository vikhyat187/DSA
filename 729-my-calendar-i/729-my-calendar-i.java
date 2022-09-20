class MyCalendar {

    List<int[]> calendar;
    public MyCalendar() {
        calendar = new ArrayList();
    }
    
    public boolean book(int start, int end) {
        for (int[] booked : calendar){
            if(booked[0] < end && booked[1] > start)return false;
        }
        calendar.add(new int[]{start,end});
        return true;
    }
}

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar obj = new MyCalendar();
 * boolean param_1 = obj.book(start,end);
 */