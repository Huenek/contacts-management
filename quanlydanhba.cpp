#include <iostream>
#include <string>
#include <vector>

struct Danhba{
	std::string name;
	std::string sdt;
};

void themsdt(std::vector<Danhba> &danhba){
	Danhba dulieumoi;
	std::cout <<"Ten nguoi dung so dien thoai moi la: ";
	std::cin >> dulieumoi.name;
	std::cout <<"So dien thoai moi them vao la: ";
	std::cin >> dulieumoi.sdt;
	danhba.push_back(dulieumoi);
	std::cout << "Da them ten va sdt moi vao danh ba." << std::endl;
}

void xoasdt(std::vector<Danhba> &danhba){
	std::string tenmuonxoa; int found;
	std::cout << "Ten nguoi dung ban muon xoa la: ";
	std::cin >> tenmuonxoa;
	int n=danhba.size();
	for(int i=0; i<n; i++){
		if(tenmuonxoa==danhba[i].name){
			std::string a=danhba[n-1].name;
			std::string b=danhba[n-1].sdt;
			danhba[n-1].name=danhba[i].name;
			danhba[n-1].sdt=danhba[i].sdt;
			danhba[i].name=a; danhba[i].sdt=b;
			found=1;
			break;
		} 
	}
	if(!found) std::cout<<"Khong tim thay nguoi dung"<< std::endl;
	else{
		danhba.pop_back();
		std::cout << "Ten va sdt da duoc xoa khoi danh ba." << std::endl;
	}
}

void timsdt(std::vector<Danhba> &danhba){
	std::string dulieucantim;
	int found;
	std::cout << "Ten nguoi ban muon tim kiem la: ";
	std::cin >> dulieucantim;	
	for(int i=0; i<danhba.size(); i++){
		if(dulieucantim==danhba[i].name) {
			std::cout << "Ten nguoi  dung: " << danhba[i].name << " co sdt la: " << danhba[i].sdt<< std::endl;	
			found=1;
			break;
		}
	}
	if(!found) std::cout<<"Khong tim thay nguoi dung"<< std::endl;
}	


int main()
{	
	std::vector<Danhba> danhba;
	/*int phim;
	std::string tendangnhap, pass;
	std::cout << "Ban da co tai khoan quan ly danh ba? An phim 1 neu ban da co, 0 neu ban chua co\n";
	std::cin >> phim;
	if(phim==1){
		std::cout << "Ten cua ban la: ";
		std::cin >> tendangnhap;
		std::cout << "\nMat khau cua ban la: ";
		std::cin >> pass;
		
	}
	else{
		std::cout <<"Vui long tao tai khoan.\n";
		std::cout << "Ten cua ban la: ";
		getline(std::cin, tendangnhap);
		std::cout << "Mat khau cua ban la: ";
		std::cin >> pass;
	}*/
	
	int choice;
	while(choice!=4){
		std::cout << "\n1.Them vao danh ba" << std::endl;
		std::cout << "2.Xoa khoi danh ba" << std::endl;
		std::cout << "3.Tim kiem trong danh ba" << std::endl;
		std::cout << "4.Thoat" << std::endl;
		std::cout << "Ban chon so: ";
		std::cin >> choice;
		switch (choice){
			case 1: themsdt(danhba);
			case 2: xoasdt(danhba);
			case 3: timsdt(danhba);
			case 4: break;
			default: std::cout << "Khong co lua chon nay." << std::endl;
		}
	}
}
	
