"""
I will start by initializing some variables like N, X and the positions of the trash. I will then sort the positions in ascending order.

Since the robot can freely move left and right along the number line, the robot will first move to the closest trash from 0. The robot will then pick up that piece of trash and move back to 0 to dispose of it. This will consume X points of energy.

Next, the robot will move to the next trash from where it disposed of the previous trash. The robot will pick up that piece of trash and move back to 0, consuming X points of energy.

For each subsequent trash, the robot will move to the next trash from where it disposed of the previous trash, pick up that piece of trash, and move back to 0. This will consume X points of energy each time.

After picking up each trash, the robot will carry all the trash that it has picked up so far, and for each subsequent step it takes until reaching position 0, it will consume (k+1)^2 points of energy, where k is the number of trash currently carried.

Finally, the total energy consumed by the robot will be the sum of the energy consumed for picking up and disposing of each trash, as well as the energy consumed for each step taken while carrying trash.

To optimize the solution, I will calculate the energy consumed for picking up and disposing of each trash and the energy consumed for each step taken while carrying trash separately.

I will use two variables, total_energy_p, to track the total energy consumed for picking up and disposing of each trash, and total_energy_c to track the total energy consumed for each step taken while carrying trash.

Every time the robot picks up a piece of trash, it will consume X points of energy.
So, total_energy_p will be the product of the number of trash and X.

For each step taken while carrying trash, it will consume (k+1)^2 points of energy.
Using a loop, I will add the energy consumed at each step by calculating the square of the number of trash currently carried.

Finally, the minimum amount of energy required to put all the trash in the trash bin will be the sum of total_energy_p and total_energy_c.

Let's write the code now.
"""

N, X = map(int, input().split())
x = list(map(int, input().split()))
x.sort()

total_energy_p = X * N
total_energy_c = 0

for i in range(N):
    total_energy_c += (i+1)**2

minimum_energy = total_energy_p + total_energy_c
print(minimum_energy)