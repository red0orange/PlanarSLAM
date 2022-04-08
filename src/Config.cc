//
// Created by fishmarch on 19-5-24.
//

#include "Config.h"

namespace Planar_SLAM{
    // void Config::SetParameterFile( const std::string& filename )
    // {
    //     if (mConfig == nullptr)
    //         mConfig = shared_ptr<Config>(new Config);

    //     mConfig->mFile = cv::FileStorage(filename.c_str(), cv::FileStorage::READ);
    //     // cout << "is open?" << mConfig->mFile.isOpened() << endl;
    //     // cout << "is open 1: " << double(file_storage["Plane.LeafSize"]) << endl;
    //     // cout << "is open 1: " << Config::Get<double>("Plane.LeafSize") << endl;
    //     // cout << "is open 2: " << double(mConfig->mFile["Plane.LeafSize"]) << endl;
    //     // cout << "is open 3: " << double(mConfig->mFile["Plane.DistanceThreshold"]) << endl;
    //     if ( !mConfig->mFile.isOpened())
    //     {
    //         std::cerr<<"parameter file "<< filename <<" does not exist."<<std::endl;
    //         mConfig->mFile.release();
    //         return;
    //     }
    // }

    // Config::~Config()
    // {
    //     if ( mFile.isOpened() )
    //         mFile.release();
    // }

    // shared_ptr<Config> Config::mConfig = nullptr;
}