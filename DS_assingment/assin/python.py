class student:
    def fill_details(sefl,name,branch,marks):
        self.name=name
        self.branch=branch
        self.marks=marks
        print("A Student record saved")
    def print_details(self):
        print("Name",self.name)
        print("Branch",self.branch)
        print("Marks",self.marks)

S= student():
S.fill_details("Nagesh","CS",34)
S.print_details()