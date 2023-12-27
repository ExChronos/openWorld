'use strict'

describe('pow', function(){

    describe('Возводит x в степень 3', function(){
        function makeTest(x){
            let expexted = x * x * x;
            it( `${x} в степени 3 будет ${expexted}`, function() {
            assert.equal(pow(x,3), expexted);
            });
        }

        for(let i = 0; i <= 5; i++){
            makeTest(i);
        }
    });

    describe('Возводит x в степень n', function(){
        let result = prompt('Введите степень для х', 5);

        function makeTest(x){
            let expexted = x**result;
            it(`${x} в степени ${result} будет ${expexted}`, function(){
                assert.equal(pow(x, result), expexted);
            });
        }

        for(let i = 0; i < 5; i++){
            makeTest(i);
        }
    });

    it('Для отрицательных значений', function(){
        assert.isNaN(pow(2, -1));
    });

    it('Для дробных n', function(){
        assert.isNaN(pow(2, 0.5));
    });

});
