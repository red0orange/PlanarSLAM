//
// Created by fishmarch on 19-5-24.
//

#ifndef ORB_SLAM2_CONFIG_H
#define ORB_SLAM2_CONFIG_H
#include <opencv2/core/core.hpp>
#include <memory>
#include <iostream>

using namespace std;
namespace Planar_SLAM {
    // class Config{
    // public:
    //     static void SetParameterFile( const string& filename );

    //     template <typename T>
    //     static T Get(const string& key){
    //         // cv::FileStorage file_storage = cv::FileStorage("/home/hdh6/github_projects/PlanarSLAM/Examples/RGB-D/TUM3.yaml", cv::FileStorage::READ);
    //         // T result = T(file_storage[key]);
    //         // file_storage.release();
    //         // return result;
    //         cout << "error key: " << key << endl;
    //         return T(Config::mConfig->mFile[key]);
    //     }
    //     ~Config();
    //     static std::shared_ptr<Config> mConfig;
    //     cv::FileStorage mFile;
    //     std::string filename;
    // private:
    //     Config(){}
    // };
    static cv::FileStorage config;
}
#endif //ORB_SLAM2_CONFIG_H
