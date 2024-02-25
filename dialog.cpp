#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
std::vector<unsigned long long> list_sinapsov ;//(10200);//.reserve(10105);//(10105);// = {};
//std::vector<unsigned long long>list_sinapsov.reserve(10105);
std::vector<unsigned long long> list_neyronov ;//(210);
//list_neyronov
//list_neyronov.reserve(202);
long long Peremennaya_Oshibka ;
int var ;
int index_neyrona, index_sinapsa; 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void	Funktciia_resheniya()
{
} 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ///////
    ///
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////// (1) //// Считывание из файла нейронов в
    ///массив:
    ///////////////////////////////////////////////////////////////////////////////////////////////
//    try {
        
        
//        int
//      //  unsigned long long
//          n_neyron;    
//        // std::vector<int>list_neyronov;
//        ifstream file("/home/viktor/my_projects_qt_2/Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt");
//        if (!file) {
//            std::cerr << "ERROR: Cannot open "
//                         "'/home/viktor/my_projects_qt_2/"
//                         "Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt'!"
//                      << std::endl;
//            //  exit(1);
//        }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
//        while (!file.eof()) 
//        {
            
//            try {
//                file >> n_neyron;
//            } catch
//                (std::bad_alloc const&)
//            {
//std::cerr << "Exception: bad_alloc! file >> n_neyron;" << std::endl; 
//            }
            
//           // file >> n_neyron;
// // cout << "n_neyron = "<< n_neyron << endl;
            
//            try {
//               list_neyronov.push_back(n_neyron);   
//            } catch
//                (std::bad_alloc const&)
//            {
//                std::cerr << "Exception: bad_alloc!  list_neyronov.push_back(n_neyron);   " << std::endl;  // FIXME BAD_ALLOC
//            }
            
//          //  list_neyronov.push_back(n_neyron);       // cout << n << endl;
//        } 
//        file.close();
//        //  std::cout << list_neyronov[1] << std::endl;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        
//    }
//    catch
//        (const std::exception &ex)
//    {
//        std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;  // FIXME: bad_alloc
//        //  exit(1);
//    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
////////////////////////////////////////////////// Другой способ: //////////////////////////////////////////////////////////////////////////////////////////    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::ifstream is("/home/viktor/my_projects_qt_2/Funkciya_podachi_signalov_na_vhod/neyroni_i_signal.txt");
    std::istream_iterator<unsigned long long> start(is), end;
    std::vector<unsigned long long> list_neyronov(start, end);
    std::cout << "Read " << list_neyronov.size() << " numbers" << std::endl;
    
    //////////////////////////////// (1) ///// Конец считывания из файла нейронов  ///в массив. ////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////// (2) //// Считывание из файла синапсов в  ///массив:
    ///////////////////////////////////////////////////////////////////////
//    try {
        
//        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//        int
//        // unsigned long long
//            n_sinaps;    
        
//        ifstream file2(
            
//            "/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi-new.txt"
            
//            //              "/home/viktor/my_projects_qt_2/zapolnenie_0/0_sinapsi.txt"
            
//            );
        
        
        
        
//        if (!file2) {
//            std::cerr << "ERROR: Cannot open "
//                         "'/home/viktor/my_projects_qt_2/"
//                         "build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-"
//                         "Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi.txt'!"
//                      << std::endl;
//            //  exit(1);
//        }
//        while (!file2.eof()) 
//        {        file2 >> n_sinaps;        list_sinapsov.push_back(n_sinaps);       // cout << n << endl;
//        } 
//        file2.close();
//        //   std::cout << list_sinapsov[1] << std::endl;
//        //  n2 = list_sinapsov.size();
//    }
    
//    catch (const std::exception &ex) {
//        std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;
//        //  exit(1);
//    }
///////////////////////////////// Второй способ у синапсов: ///////////////////////////////////////////////////////////////////////////////////////////////////////////    
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    std::ifstream is2("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi-new.txt");
    std::istream_iterator<unsigned long long> start2(is2), end2;
    std::vector<unsigned long long> list_sinapsov(start2, end2);
    std::cout << "Read " << list_sinapsov.size() << " numbers" << std::endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
//try {
     cout << "Ошибка = "<< Peremennaya_Oshibka << endl; // 0
    Funktciia_resheniya();
//}
//catch (const std::exception &ex) {
//    std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;
    //  exit(1);
//}
   cout << "Ошибка = "<< Peremennaya_Oshibka << endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /////////////////////////////////////// (3) Функция решения   /// funktsiya_resheniya // NOTE: функция решения
   //
   //////////////////////////////////////////////////////////////////////
   // NOTE: ТОЧКА ОСТАНОВА
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   for ( var = 101; var < 201; ++var) // это диапазон нейронов
   {
       //        // это для одного 101 нейрона:
       for (int index_neyrona = 1, index_sinapsa = 1;
            index_neyrona < 201, index_sinapsa < 10101;
            ++index_neyrona, index_sinapsa = index_sinapsa + 100)
       // выход за индекс?
       {
           //            // тут можно костыль поставить проверка что
           //            Synaps::Peremennaia_Soprotivlenie_Sinapsa[index_sinapsa] не
           //            0
           //            if (list_sinapsov[index_sinapsa] == 0)
           //            { // для избежания деления на 0
           //                list_sinapsov[index_sinapsa] = 1;
           //            }
           ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
         //  cout << "list_neyronov[0] = " <<list_neyronov[var]                << endl; 
           
           try {
             //  while (list_neyronov[var]<9223372036854775807          )
               {
                   
                   
                   list_neyronov[var]=list_neyronov[var]+
                                        (list_neyronov[index_neyrona]/ list_sinapsov[index_sinapsa]);
               }
           }
           //                catch
           //                                (std::bad_alloc const&)
           //                            {
           
           catch
               (const std::exception &ex)
           {
               std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;  // FIXME: bad_alloc
               //  exit(1);
           }
           ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
           
           ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      
           
       }
       
   }
   // нейроны второго ряда посчитаны
   // тут надо досчитать последний 201 нейрон.
   for (int
            index_neyrona = 101, index_sinapsa = 10001; index_neyrona < 201;
        ++index_neyrona, ++index_sinapsa)
   {
       //        if (list_sinapsov[index_sinapsa] == 0) { // для избежания деления на 0
       //            list_sinapsov[index_sinapsa] = 1;
       //        }
       //  cout << "list_neyronov[201] = " << list_neyronov[200] << std::endl;
       
       list_neyronov[201] = list_neyronov[201] + (list_neyronov[index_neyrona] /
                                                  list_sinapsov[index_sinapsa]);//  list_sinapsov[index_sinapsa]==0
       
       //std::cout << "list_neyronov[201] = " << list_neyronov[201] << std::endl; 
       
   }
   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // long long oshibka
   Peremennaya_Oshibka
       =   1073741824-list_neyronov[201] ; /// получается если oshibka
     std::cout << "Peremennaya_Oshibka = " << Peremennaya_Oshibka<< std::endl;
   
   list_neyronov.clear ();
   list_sinapsov.clear ();
    
    
    
    
    
    
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
}

Dialog::~Dialog()
{
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

