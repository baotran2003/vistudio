#include<iostream>
#include<string>
struct conNguoi {
    conNguoi(std::string ht, int t, int cn, float cc) {
        ho_ten = ht;
        tuoi = t;
        can_nang = cn;
        chieu_cao = cc;
    }
    int tuoi;
    int can_nang;
    float chieu_cao;
    std::string ho_ten;
};
int main() {  
    // conNguoi hoa(18,60,1.72);
    // conNguoi bo(10,48,1.5);
    // conNguoi lan(16,50,1.6);
    // // std::cout << &bao << std::endl;
    // // std::cout << &bo << std::endl;
    // conNguoi *bo_nhi = nullptr;
    // // Thu 2
    // bo_nhi = &bo;
    // bo.tuoi = 15;
    // std::cout <<(*bo_nhi).tuoi<< std::endl;
    
    //     // Thu 3
    // bo_nhi = &hoa;
    // hoa.can_nang = 52;
    // std::cout<<(*bo_nhi).can_nang<<std::endl;
        // Ung dung cua con tro vao mang
    conNguoi hoi_phu_nu[5] = 
    {
        conNguoi("Thao", 22,95,1.65),
        conNguoi("Lan", 18,90,1.65),
        conNguoi("Huong", 29,85,1.62),
        conNguoi("Nhung", 16,80,1.63),
        conNguoi("Tuyet", 30,100,1.65),
        
    };
    conNguoi *bo_nhi = nullptr;
    // // for(int i=0; i<5; i++) {
    //     std::cout <<(hoi_phu_nu[i]).ho_ten << std::endl; Cach 1:
    // // }
    for(bo_nhi = hoi_phu_nu; bo_nhi<hoi_phu_nu + 5; bo_nhi++) {
        std::cout<<(*bo_nhi).ho_ten <<std::endl;

    }
}