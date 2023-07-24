basic=float(input("Enter basic salary of an employee:"))
hra=basic*10/100
ta=basic*5/100
sal=basic+hra+ta
prof_tax=sal*2/100

net_sal=sal-prof_tax

print("hra",hra,"\nta",ta,"\nsal",sal,"\nprof-tax",prof_tax)
print("Net salary payable after deduction is ",net_sal)
