class RailwayForm():   
    formType = "RailwayForm"
    def printData(self):
        print(f"Name : {self.name}")
        print(f"Train : {self.train}")
        print(f"Seat number : {self.seatnum}")

print("----------------------------------------")

pranavsApplication = RailwayForm()
pranavsApplication.name = "Pranav Kumar Patil"
pranavsApplication.train = "Koyna Express"
pranavsApplication.seatnum = "17"
pranavsApplication.printData()

print("----------------------------------------")

shravaneesApplication = RailwayForm()
shravaneesApplication.name = "Shravanee Kumar Patil"
shravaneesApplication.train = "Koyna Express"
shravaneesApplication.seatnum = "18"
shravaneesApplication.printData()

print("----------------------------------------")

kusumsApplication = RailwayForm()
kusumsApplication.name = "Kusum Kumar Patil"
kusumsApplication.train = "Koyna Express"
kusumsApplication.seatnum = "19"
kusumsApplication.printData()

print("----------------------------------------")

kumarsApplication = RailwayForm()
kumarsApplication.name = "Kumar Shivappa Patil"
kumarsApplication.train = "Koyna Express"
kumarsApplication.seatnum = "20"
kumarsApplication.printData()

print("----------------------------------------")