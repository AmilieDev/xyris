/**
 * @file piper.cpp
 * @author Amilie Baker (amiliefn@gmail.com)
 * @brief A piping test / solution to ensure IPC works.
 * @version 0.2
 * @date 2026-05-26
 *
 * @copyright Copyright the Xyris Contributors (c) 2026
 *
 */

#include <IPC/pipes.hpp>
#include <Devices/Graphics/console.hpp>
#include <Applications/piper.hpp>

namespace Apps {

    void piper()
    {
        pipe_t* p = create_pipe();
        
        const char* msg = "Hello pipes!";
        size_t len = 12;
        
        write_pipe(p, msg, len);
        
        char result[12];
        read_pipe(p, result, len);
        
        bool passed = true;
        for (size_t i = 0; i < len; i++){
            if (result[i] != msg[i]){
                passed = false;
            }
        }

        if(passed){
            Console::printf("Passed Pipe Test!\n");
        }else{
            Console::printf("Failed Pipe Test!\n");
        }
                
        close_pipe(p, true);
        close_pipe(p, false);
    }
}
