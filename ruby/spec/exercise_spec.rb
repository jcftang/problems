require 'exercise.rb'
require 'spec_helper'

describe "test" do
  it "should return 3 combinations" do
    input = [5, 5, 10, 15]
    target = 15
    start_index = 0
    start_sum = 0

    # need to capture output or return data for checking
    recursive_sum([], input, target, start_index, start_sum)
  end
end
