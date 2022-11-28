
template <typename X>
std::vector<X> equal_matches(std::vector<X> arr_1, std::vector<X> arr_2){
    std::vector<X> for_res;
    bool key = false;
    for(int i = 0; i < arr_1.size(); ++i){
        for(int j = 0; j < arr_2.size(); ++j){
            if(arr_1[i] == arr_2[j]){
                for_res.push_back(arr_2[j]);
                key = true;       
            }
        }
    }
    if(key){
        std::cout<<"Arays have equal matches they are` "<<std::endl;
        for(int i = 0; i < for_res.size(); ++i){
            std::cout<<for_res[i]<<std::endl;
        }
        return for_res;
    }else{
        std::cout<<"Arays Don't have equal matches!!"<<std::endl;
        return for_res;
    }
}