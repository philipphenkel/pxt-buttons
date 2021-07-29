namespace buttons {

    /**
    * Enable the micro:bit buttons. 
    */
    //% shim=buttons::enable
    export function enable(): void { basic.pause(100) }

    /**
    * Disable the micro:bit buttons. 
    */
    //% shim=buttons::disable
    export function disable(): void { basic.pause(100) }

}