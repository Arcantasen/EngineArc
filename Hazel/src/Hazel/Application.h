#pragma once

#include "Core.h"

namespace Hazel {
    class EXPORTSY Application {

        public:
        Application();
        virtual ~Application();
    
        void Run();
    };

    Application* CreateApplication();
}