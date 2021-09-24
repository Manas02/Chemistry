program lennard_jones
!!============================================================================
!! Name : Manas Mahale
!! Calculate Lennard Jones Potential
!! r       -> real
!! sigma   -> read
!! eps     -> read
!! return Lennard Jones Potential
!!============================================================================
    implicit none  
    integer :: r
    real :: sigma
    real :: eps
    real :: V_lj

    sigma = 3.38
    eps = 19.8
    read *, r
    do r = -r, r
        V_lj = 4*eps*((sigma / r)**12 - (sigma / r)**6)
        print *, 'V_lj = ', V_lj
    end do

end program lennard_jones
