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
  // Переменная "счётчик индекса синапсов"
int peremennaya_schiotchik_indeksa_sinapsov=0;
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
    std::ifstream is2("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi-new-2.txt");
    std::istream_iterator<unsigned long long> start2(is2), end2;
    std::vector<unsigned long long> list_sinapsov(start2, end2);
    std::cout << "Read " << list_sinapsov.size() << " numbers" << std::endl;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
//try {
//     cout << "Ошибка = "<< Peremennaya_Oshibka << endl; // 0
//    Funktciia_resheniya();
//}
//catch (const std::exception &ex) {
//    std::cerr << "Exception: '" << ex.what() << "'!" << std::endl;
    //  exit(1);
//}
   cout << "Ошибка = "<< Peremennaya_Oshibka << endl;
        
      //  goto a; // обходим функцию решения
    b:
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
       
   } // конец  for ( var = 101; var < 201; ++var) // это диапазон нейронов
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
 //  std::cout << "Peremennaya_Oshibka = " << Peremennaya_Oshibka<< std::endl;
   if (Peremennaya_Oshibka<=0)// на выход
       goto c;
   a:
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
/////////////////// Конец функции решения. /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Функция уменьшения ошибки путём уменьшения сопротивлений синапсов.
// Алгоритм:
// 1. Уменьшаем первый синапс (с индексом 0) на 1
// Сделаем новую ветку git перед этим. Имя новой ветки "funktsiya_umensheniya_osibki"
   
//   list_neyronov.clear ();
//   list_sinapsov.clear ();
  //  std::cout << " list_sinapsov[0] = " << list_sinapsov[0]<< std::endl;
// Проверим что не уменьшим синапс меньше 0. Причём 0 не должен быть равен строго.
    if (list_sinapsov[10101]==1) // на выход
    {
      std::cout << "Значения всех синапсов минимальны и равны 1. " << std::endl;
        goto d;
    }
    e:
    if (list_sinapsov[peremennaya_schiotchik_indeksa_sinapsov] >1)
        // тут где-то проверка что последний синапс равен 1
   list_sinapsov[peremennaya_schiotchik_indeksa_sinapsov]  =  list_sinapsov[peremennaya_schiotchik_indeksa_sinapsov]-1;
    // TODO: ЕСЛИ значение синапса равно 1 увеличиваем peremennaya_schiotchik_indeksa_sinapsov на 1
    if (list_sinapsov[peremennaya_schiotchik_indeksa_sinapsov] ==1)
    {
        peremennaya_schiotchik_indeksa_sinapsov = peremennaya_schiotchik_indeksa_sinapsov+1;
        goto e;
    }
 //   std::cout << " list_sinapsov[0] = " << list_sinapsov[0]<< std::endl;
   // Если не дошли до последнего индекса синапса. Если дошли то обнуляем его (индекс).
    if (peremennaya_schiotchik_indeksa_sinapsov<10101)
   peremennaya_schiotchik_indeksa_sinapsov=peremennaya_schiotchik_indeksa_sinapsov+1;
    else
        peremennaya_schiotchik_indeksa_sinapsov=0;
    // // Где-то надо сделать проверку чтоб не зайти за значение синапса меньше 0.
// 2. Проверим ошибку
    // Переменная "счётчик индекса синапсов"?
    goto b; // Переходим к функции решения.
    
    
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    c:
         std::cout << "Ошибка исчезла. Peremennaya_Oshibka = " << Peremennaya_Oshibka<< std::endl;
                
                // TODO: тут надо записать вектор синапсов в файл
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
          d:
//////////////////////////// запись в файл 1 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////         
//         ofstream file("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi-new-2.txt");
//      //   vector<unsigned long long> Str {1,2,3,4};
//         //   ....
//         for(int i=0;i<list_sinapsov.size();i++)
//         {
//             file<<list_sinapsov[i]<<"\n";
//             ui->textEdit->append (QString::number(list_sinapsov[i]));
//         }
//         file.close();
///////////////////////// 2 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//              fstream file;
//              file.open("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi-new-2.txt",ios_base::out);
              
//              for(int i=0;i<list_sinapsov.size();i++)
//              {
//                  file<<list_sinapsov[i]<<endl;
//              }
              
//              file.close();
/////////////////////////////// 3 //////////////////////////////////////////////////////////////////////////////////////////////////////////
fstream file;
file.open("/home/viktor/my_projects_qt_2/build-zapolnenie_sinapsov_sluchajnymi_nachalnymi_soprotivleniyami_2-Desktop_Qt_5_12_12_GCC_64bit-Debug/sinapsi-new-3.txt",ios_base::out);

vector<unsigned long long>::iterator itr;

for(itr=list_sinapsov.begin();itr!=list_sinapsov.end();itr++)
{
    file<<*itr<<endl;
}

file.close();
////////////////////////// конец записи в файл ///////////////////////////////////////////////////////////////////////////////////////////////////////////// 
///  запишем вектор в textedit
//         for (int var = 0; var < list_sinapsov.size(); ++var) {
//             ui->textEdit->append ();
//         }
 
               // ;;
}

Dialog::~Dialog()
{
    delete ui;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

