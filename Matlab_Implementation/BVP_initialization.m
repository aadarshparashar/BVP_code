%% BVP_initialization
% This function will be used to calculate initial properties from the user input

% Inputs
%   -
% Outputs
%   -

function [MESH, SIM, TOL, FLAG] = BVP_initialization(MESH, SIM, TOL, FLAG) %%%% These inputs should just be a pointer?
% Calculate initial discretization
dx = MESH.L/MESH.N_CV;
MESH.x_vec   = dx/2 : dx : MESH.L - dx/2 ; %%%%%%%%%Where should the nodes be defined?
MESH.x_vec_m = MESH.x_vec - dx/2;
MESH.x_vec_p = MESH.x_vec + dx/2;

% Calculate the number of state variables there are
MESH.N_SV = MESH.N_CV * 1; %%% 1 because we only have temperature
%%%% Don't know if I like this becoming a part of the mesh struct

end