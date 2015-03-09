STIC -- Simple Tests In C
2010 -- 2015 (based on SeaTest)

Last Updated: 10 March, 2015
Version: 0.5.1

Brief Description

    Stic is a development of SeaTest project by Keith Nicholas.  This is a
    simple cross-platform plain C testing framework with automatic
    test-registration without pre-processing.

    Additions made to SeaTest are not upstreamed mainly because automatic
    test registration seems to go against goals outlined on SeaTest home
    page: https://code.google.com/p/seatest/

Usage

    Being SeaTest derivative, still works fine with any previously written
    tests, as of now either of both approaches can be used for a test suite.

State

    This was implemented because the author couldn't find any plain C testing
    frameworks that support automatic test registration, it's actively used,
    which is kinda guarantees continued development, but infrastructure things
    like documentation or more examples might require some time to be sorted
    out properly.

License

    First, license in case of tests doesn't matter that much, because they are
    not distributed and most licensing problems arise from software
    distribution.  The author prefers copy-left licenses, so STIC additions
    are under GPL, while original SeaTest code is under MIT.  Again,
    effectively it doesn't really matter whether it's copy-left license or not
    for testing frameworks, because tests are not distributed, especially in
    binary form.
