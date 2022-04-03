# Test Plan and Test Ouput

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**PASS/FAIL**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01|H_01| Provide details for login to book a movie ticket| password| login In Successfully| Successfully logined In| PASS |
|  T_02|H_01| if wrong password is entered| Password|  wrong Password | wrong Password | PASS |
|  T_03|H_02| Show the  details of movie|  Enter choice | Display list | Display list | PASS |
|  T_04|H_02| Purchase a movie ticket| enter choice | ThankYou for Ticket Booking| ThankYou for Ticket Booking| PASS |
|  T_05|H_03| purchased movie ticket Summary| enter choice | Booking ID,Show name,Customer Name,Hallno,Price | Booking ID,Show name,Customer Name,Hallno,Price| PASS |
|  T_06|H_04| Cancellation  a ticket   |ID number|  Your ticket is cancelled | Your ticket is cancellaed | PASS |
|  T_07|H_03| Change the price of a ticket (only admin) | password| Please enter new price | Please enter new price   | PASS |
|  T_08|H_03| Change the price of a ticket after login (only admin) | enter new price-price|Price Updated Successfully | Price Updated Successfully  | PASS |
|  T_09|H_03| if wrong password is entered while Changing the price of ticket (only admin) | password | Entered Password is wrong  |  Entered Password is wrong |PASS |
|  T_10|H_05| To view the reserved ticket |password| summary of tickeT|summary of ticket | PASS |
|  T_11|H_05| if wrong password is entered to view the reserved ticket|Correct Password | Entered Password is wrong|Entered Password is wrong | PASS |













