#include<vector>
//namespace example_1 {
    /*
    Multiplies all entries of input dynamic array by 2.0
    input: const and passed by reference, (in python, list can be given as an input) 
    output: returns a copy, (in python, list is returned)
    */
    std::vector<double> modify_list(const std::vector<double>& input){
        std::vector<double> output;
        std::transform(
            input.begin(), 
            input.end(),
            std::back_inserter(output),
            [](double x) -> double { 
                return 2.*x;
                }
            );
        return output;
    }
//}


