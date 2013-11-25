require 'spec_helper'

describe FibonacciRb do
  it 'should have a version number' do
    FibonacciRb::VERSION.should_not be_nil
  end

  describe "#fibonacci" do
    it "1 should yield 1" do
      described_class.fibonacci(1).should == 1
    end

    it "67 should yield 44945570212853" do
      described_class.fibonacci(10).should == 55
    end
  end
end
